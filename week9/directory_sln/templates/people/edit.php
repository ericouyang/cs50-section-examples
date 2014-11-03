<h1>Edit person #<?= $person['id']; ?></h1>

<form action="edit_person.php" method="post" class="horizontal">
  <input type="hidden" name="id" value="<?= $person['id'] ?>" />
  <div class="field">
    <label>Name:</label>
    <input name="name" placeholder="Your name" type="text" autofocus="true" required="true" value="<?= $person['name']; ?>"/>
  </div>
  <div class="field">
    <label>House:</label>
    <select name="house">
      <option value="Adams" <?= ($person['house'] == "Adams") ? "selected" : "" ;?>>Adams House</option>
      <option value="Quincy" <?= ($person['house'] == "Quincy") ? "selected" : "" ;?>>Quincy House</option>
      <option value="Leverett" <?= ($person['house'] == "Leverett") ? "selected" : "" ;?>>Leverett House</option>
    </select>
  </div>
  <div class="field">
    <label>Age:</label>
    <input name="age" placeholder="Your age" type="text" value="<?= $person['age']; ?>" />
  </div>
  <div class="field">
    <input type="submit" value="Submit edits!" />
  </div>
</form>
