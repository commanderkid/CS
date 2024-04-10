float sum_elements(float a[], unsigned length) {
  unsigne i; // int i;
  float result = 0;

  // i имеет тип int => [−2 147 483 648 : 2 147 483 647]
  // length имеет тип unsight int => [ 0 : 4 294 967 295 ]
  // i U length [0 : 2 147 483 647]
  // length = 2 147 483 647 + 1
  // i = −2 147 483 648
  // Происходит переполнение => int приводится к unsigned, при доступе к индексу массива i 
  
  for (i = 0; i <= length-1; i++)
    result += a[i];

  return result;
}
