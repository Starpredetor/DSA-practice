document.addEventListener("DOMContentLoaded", function () {
    const form = document.querySelector("form");
    const emailInput = document.getElementById("email");
    const passwordInput = document.getElementById("password");

    form.addEventListener("submit", function (event) {
        event.preventDefault();

        const email = emailInput.value;
        const password = passwordInput.value;

        if (email == "example@email.com" && password == "password") {
            alert("Login successful!");
        } else {
            alert("Invalid email or password.");
        }
    });
});