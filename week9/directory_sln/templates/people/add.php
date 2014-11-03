<h1>Add a person</h1>

<form action="add_person.php" method="post" class="horizontal">
  <div class="field">
    <label>Name:</label>
    <input name="name" placeholder="Your name" type="text" autofocus="true" required="true" />
  </div>
  <div class="field">
    <label>House:</label>
    <select name="house">
      <option value="Adams">Adams House</option>
      <option value="Quincy">Quincy House</option>
      <option value="Leverett">Leverett House</option>
    </select>
  </div>
  <div class="field">
    <label>Age:</label>
    <input name="age" placeholder="Your age" type="text" />
  </div>
  <div class="field">
    <input type="submit" value="Register me!" />
  </div>
</form>
