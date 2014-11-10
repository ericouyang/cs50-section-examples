window.onload = function() {
    // alert on page load
    alert("Hey! The page is ready to go!");

    // alert on button click
    var btn = document.getElementById("important-btn");
    btn.onclick = function() {
        alert("I've been clicked!");
    };

    // alert when a person has "blurred" the input
    var input = document.getElementById("name");
    input.addEventListener("blur", function(e) {
        alert(e.target.value);
    });
};
