<?php
// Start the session.
session_start();
?>

<html>
    <body>
        <?php
            // Set session variables.
            $_SESSION["fav_color"] =  "orange";
            $_SESSION["fav_animal"] = "dog";
            echo "Session variables set";
        ?>
    </body>
</html>
