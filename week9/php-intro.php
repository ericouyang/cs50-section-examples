<?php
$x = 5;
$y = "Hello";
$z = array("Mather", "Quincy", "Currier", "Adams");

// Printing using echo and print.
echo $x . "<br>";
print $y . "<br>";
echo $z[0] . "<br>";

echo "<br>";

// Using variables when printing a string.
echo "I have $$x.<br>";
echo "My House is {$z[3]}.<br>";
echo "I like " . $z[1] . " House.<br>";

echo "<br>";

$x = 5;
// if-else statements
if ($x < 3)
{
    echo "Small<br>";
}
else if ($x < 7)
{
    echo "Medium<br>";
}
else
{
    echo "Large<br>";
}

echo "<br>";

// for loop
for ($x = 0; $x < 5; $x++)
{
    echo $x . "<br>";
}

echo "<br>";

// for-each loop over an associative array
$a = array("a" => 1, "b" => 2, "c" => 3);
foreach ($a as $key => $value)
{
    echo "$key: $value<br>";
}

echo "<br>";

// while loop
$y = 0;
while ($y < 5)
{
    echo $y . "<br>";
    $y++;
}

echo "<br>";

// do-while loop
$z = 0;
do
{
    echo $z . "<br>";
    $z++;
}
while ($z < 5);

echo "<br>";

// factorial function
function factorial($n)
{
    if ($n <= 1)
    {
        return 1;
    }
    return $n * factorial($n - 1);
}

echo "5! = " . factorial(5) . "<br>";
?>
