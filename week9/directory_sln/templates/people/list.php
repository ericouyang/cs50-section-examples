<h1>Directory</h1>

<?php if (count($persons) > 0): ?>
    <table border="1">
        <thead>
            <tr>
                <th>ID</th>
                <th>Name</th>
                <th>House</th>
                <th>Age</th>
                <th></th>
            </tr>
        </thead>
        <tbody>
            <?php foreach ($persons as $person): ?>
                <tr>
                    <td><?= $person['id'] ?></td>
                    <td><?= $person['name'] ?></td>
                    <td><?= $person['house'] ?></td>
                    <td><?= $person['age'] ?></td>
                    <td>
                        <a href="edit_person.php?id=<?= $person['id']; ?>">Edit</a>
                        <a href="delete_person.php?id=<?= $person['id']; ?>">Delete</a>
                    </td>
                </tr>
            <?php endforeach; ?>
        </tbody>
    </table>
<?php else: ?>
    <p>No people in the directory, yet! You should add one!</p>
<?php endif; ?>


<p><a href="add_person.php">Add a person</a></p>
