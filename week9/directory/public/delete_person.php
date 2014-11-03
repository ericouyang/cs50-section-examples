<?php

    // configuration
    require("../includes/directory_functions.php");

    // delete the person
    if (delete_person($_GET['id']) === false)
    {
        apologize("There was an error deleting the entry");
    }

    // redirect to home page
    redirect("/");

?>
