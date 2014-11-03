<?php

    // configuration
    require("../includes/directory_functions.php");

    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // create the person
        if (create_person($_POST['name'], $_POST['house'], $_POST['age']) === false)
        {
            apologize("There was a problem with creating the entry. Please try again");
        }

        redirect("/");
    }
    else
    {
        // render add person form
        render("people/add.php");
    }

?>
