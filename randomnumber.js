// input any two number and get random number between them
function generateRandom(min, max) {
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

// calling function to generate random number between 1 and 100
// you can pass any parameters to generate random number between any two number

generateRandom(1, 100);
