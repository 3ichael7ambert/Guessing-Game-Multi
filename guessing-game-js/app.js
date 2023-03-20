// Set the number of attempts
var maxAttempts = 10;

// Generate a random number between 1 and 100
var randomNumber = Math.floor(Math.random() * 100) + 1;

// Ask the player to guess the number
var promptMessage = "Guess a number between 1 and 100 (you have " + maxAttempts + " attempts)";
var guess = parseInt(prompt(promptMessage));

// Loop until the player guesses the number or runs out of attempts
for (var i = 1; i <= maxAttempts; i++) {
  // Check if the guess is correct
  if (guess === randomNumber) {
    alert("Congratulations! You guessed the number in " + i + " attempts!");
    break;
  }

  // Check if the guess is too high or too low
  var message = "Your guess is " + (guess < randomNumber ? "too low" : "too high");
  message += ". You have " + (maxAttempts - i) + " attempts remaining.";
  guess = parseInt(prompt(message));
}

// If the player has used up all attempts and still hasn't guessed correctly, tell them the answer
if (i > maxAttempts) {
  alert("Sorry, you ran out of attempts. The number was " + randomNumber + ".");
}
