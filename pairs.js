function pairs(array, number) {
  var matchingPairs = [];
  for(let i=0; i<array.length; i++) {
    for(let j=i+1; j<array.length; j++) {
      if(array[i]+array[j]===number) matchingPairs.push([array[i],array[j]])
    }
  }
  return matchingPairs;
}