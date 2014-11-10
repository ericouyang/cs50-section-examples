$(document).ready(function() {
    // alert on page load
    alert("Hey! The page is ready to go!");

    // alert on button click
    $("#important-btn").click(function(){
        alert("I've been clicked!");
    });

    // alert when a person has "blurred" the input
    $("#name").on("blur", function(e) {
        alert(e.target.val());
    });
});
