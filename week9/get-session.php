<?php
// Start the session.
session_start();
?>

<html>
    <body>
        My favorite color is <?= $_SESSION["fav_color"]?><br>
        My favorite animal is <?= $_SESSION["fav_animal"]?><br>
    </body>
</html>


