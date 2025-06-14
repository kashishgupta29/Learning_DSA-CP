

function loginUser(username, password) {
  return new Promise((resolve, reject) => {
    setTimeout(() => {
      if (username === "admin" && password === "1234") {
        resolve("login successful");
      } else {
        reject("invalid credentials");
      }
    }, 2000);
  });
}

// let username = prompt("ENTER THE USERNAME");
// let password = prompt("ENTER THE PASSWORD");
loginUser("kashish", "123")
  .then((message) => console.log(message))
  .catch((error) => console.log(error));
