// return a Promise with the result of the AJAX request
// to the Facebook Graph API for user details

// see https://developers.facebook.com/docs/graph-api/reference/v2.2/user
function getFbUser(username) {
    console.log("Looking up " + username + " using the Graph API...");
    return $.getJSON("http://graph.facebook.com/" + username);
}

// return a Promise with the result of the AJAX request
// to the Facebook Graph API for user profile picture

// see https://developers.facebook.com/docs/graph-api/reference/v2.2/user/picture
function getFbProfilePicture(username) {
    return $.getJSON("http://graph.facebook.com/" + username + "/picture", {
        redirect: 0,
        type: "large"
    });
}

// update the display with the given user
function updateDisplay(user) {
    // update user details
    $("#fb-id").text(user.id);
    $("#fb-username").text(user.username);
    $("#fb-first-name").text(user.first_name);
    $("#fb-last-name").text(user.last_name);

    // create a new image element
    var image = $("<img>", {
        src: user.picture
    });
    $("#fb-image").html(image);
}

// display an error to the user through an alert box
function showError() {
    alert("Oops! There was an error loading the user details.");
}

// set up the website with the proper event handler
$(document).ready(function() {
    $("form").submit(function(e){
        e.preventDefault();
        var username = $("#username").val();
        if (username === "") {
            alert("You must enter in the username you want to lookup!");
        }
        else {
            getFbUser(username)
                .done(function(user){
                    getFbProfilePicture(username)
                        .done(function(data){
                            user.picture = data.data.url;
                            updateDisplay(user);
                        })
                        .fail(showError);
                })
                .fail(showError);
        }
    });
});
