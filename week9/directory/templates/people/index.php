<h1>Directory</h1>

<table border="1">
    <thead>
        <tr>
            <th>ID</th>
            <th>Name</th>
            <th>House</th>
            <th>Age</th>
        </tr>
    </thead>
    <tbody>
        <?php foreach ($persons as $person): ?>
            <tr>
                <td><?= $person["id"] ?></td>
                <td><?= $person["name"] ?></td>
                <td><?= $person["house"] ?></td>
                <td><?= $person["age"] ?></td>
            </tr>
        <?php endforeach; ?>
    </tbody>
</table>
