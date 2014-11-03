<?php

    // configuration
    require("../includes/directory_functions.php");

    // render directory
    render("people/list.php", [
        "persons" => get_all_persons()
    ]);

?>
