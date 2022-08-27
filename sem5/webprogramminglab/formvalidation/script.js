const form = document.getElementById("form");
const username = document.getElementById("username").value.trim();
const email = document.getElementById("email").value.trim();
const password = document.getElementById("password").value.trim();
const password2 = document.getElementById("password2").value.trim();

form.addEventListener("submit", (e) => {
  e.preventDefault();
  validateInputs();
});
const setError = (element, message) => {
  console.log("entered");
  console.log(element.parentElement);
  const inputControl = element.parentElement;
  const errorDisplay = inputControl.querySelector(".error");
  errorDisplay.innerText = message;
  inputControl.classList.add("error");
  inputControl.classList.remove("success");
};
const setSuccess = (element) => {
  const inputControl = element.parentElement;
  const errorDisplay = inputControl.querySelector(".error");
  errorDisplay.innerText = "";
  inputControl.classList.add("success");
  inputControl.classList.remove("error");
};
const validusername = (username) => {
  const re = /^[a-zA-Z0-9]+$/;
  return re.test(String(username).toLowerCase());
};
const validemail = (email) => {
  const re =
    /^(([^<>()[\]\.,;:\s@\"]+(\.[^<>()[\]\.,;:\s@\"]+)*)|(\".+\"))@(([^<>()[\]\.,;:\s@\"]+\.)+[^<>()[\]\.,;:\s@\"]{2,})$/i;
  return re.test(String(email).toLowerCase());
};
const validateInputs = () => {
  if (username === "") {
    setError(username, "username is required");
  } else if (!validusername(username)) {
    setError(username, "provide a valid username");
  } else {
    setSuccess(username);
  }
  if (email === "") {
    setError(email, "email is required");
  } else if (!validemail(email)) {
    setError(email, "provide a valid email ");
  } else {
    setSuccess(email);
  }
  if (password === "") {
    setError(password, "password is required");
  } else if (password.length < 8) {
    setError(password, "password should be greater than 8 characters");
  } else {
    setSuccess(password);
  }
  if (password2 === "") {
    setError(password2, "please confirm your password");
  } else if (password2 !== password) {
    setError(password2, "password doesnt match");
  } else {
    setSuccess(password2);
  }
};
