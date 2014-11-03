<?php

    // configuration
    require("../includes/directory_functions.php");

    // render directory
    render("people/index.php", [
        "persons" => get_all_persons()
    ]);

?>
