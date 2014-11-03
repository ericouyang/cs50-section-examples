<?php

    // configuration
    require("../includes/directory_functions.php");

    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        if (edit_person(
                $_POST['id'],
                $_POST['name'],
                $_POST['house'],
                $_POST['age']
            ) == false)
        {
            apologize("There was an error editing the person");
        }

        redirect('/');
    }
    else
    {
        // verify input
        if (empty($_GET['id']))
        {
            apologize("You must enter a user ID");
        }

        // attempt to get the requested user
        $person = get_person($_GET['id']);
        if ($person == false)
        {
            apologize("There is no user with the ID: ".$_GET['id']);
        }

        // render edit person form
        render("people/edit.php", [
            "person" => $person
        ]);
    }


?>
