puts "Welcome to the number guessing game!"

# Generate a random number between 1 and 100
secret_number = rand(1..100)

# Initialize the number of attempts
attempts = 0

# Loop until the player guesses the correct number
loop do
  print "Guess a number between 1 and 100: "
  guess = gets.chomp.to_i
  attempts += 1

  # Check if the guess is correct
  if guess == secret_number
    puts "Congratulations, you guessed the number in #{attempts} attempts!"
    break
  elsif guess > secret_number
    puts "Too high, try again."
  else
    puts "Too low, try again."
  end
end
