<?php
// Start the session.
session_start();
?>

<html>
    <body>
        <?php
            // Remove all session variables.
            session_unset();

            // Destroy the session.
            session_destroy();
            
            echo "Session destroyed";
        ?>
    </body>
</html>

