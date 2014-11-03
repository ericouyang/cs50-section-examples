<?php

    // configuration
    require("../includes/directory_functions.php");

    if ($_SERVER["REQUEST_METHOD"] == "POST")
    {
        // TODO

        redirect('/');
    }
    else
    {
        // verify input
        // TODO

        // attempt to get the requested user
        // TODO

        // render edit person form
        render("people/edit.php", [
            "person" => $person
        ]);
    }


?>
