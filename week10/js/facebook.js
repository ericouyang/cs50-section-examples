
// https://developers.facebook.com/docs/graph-api/reference/v2.5/user
function getCurrentUser(cb) {
    console.log("Looking up current user using the Graph API...");
    // TODO
}

// see https://developers.facebook.com/docs/graph-api/reference/v2.5/user/picture
function getFbProfilePicture(cb) {
    // TODO
}

// update the display with the given user
function updateDisplay(user) {
    // TODO
}

function clearDisplay() {
    // TODO
}

// display an error to the user through an alert box
function showError() {
    alert("Oops! There was an error loading the user details.");
}

// displays the current user
function displayCurrentUser() {
    // TODO
}

// callback to respond to login state
// see https://developers.facebook.com/docs/reference/javascript/FB.getLoginStatus
function fbCallback(response) {
    console.log(response);

    // TODO
}


// set up the website with the proper event handler
$(document).ready(function() {
    // see https://developers.facebook.com/docs/facebook-login/web
    window.fbAsyncInit = function() {
        FB.init({
          appId      : '479509265564676',
          xfbml      : true,
          version    : 'v2.5'
        });
        
        // Now that we've initialized the JavaScript SDK, we call 
        // FB.getLoginStatus().  This function gets the state of the
        // person visiting this page and can return one of three states to
        // the callback you provide.  They can be:
        //
        // 1. Logged into your app ('connected')
        // 2. Logged into Facebook, but not your app ('not_authorized')
        // 3. Not logged into Facebook and can't tell if they are logged into
        //    your app or not.
        //
        // These three cases are handled in the callback function.
        
        FB.getLoginStatus(fbCallback);
        
        // subscribe to events
        FB.Event.subscribe('auth.login', fbCallback);
        FB.Event.subscribe('auth.logout', fbCallback);
    };
});
