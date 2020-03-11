let vetor = [5, 3, 1, 7, 4, 10];
let len = vetor.length;

function bead_sort(len) {
  let i,
    j,
    max,
    sum = 0;
  const beads = [];

  max = vetor[0];
  for (i = 1; i < len; i++) {
    if (vetor[i] > max) max = vetor[i];
  }

  console.log('max: ', max);

  //Marca a quantidade de beads
  for (i = 0; i < len; i++) {
    for (j = 0; j < vetor[i]; j++) {
      beads[i * max + j] = 1;
    }
  }
  console.log('depois de marcar: ', beads);
  //Conta a quantidade de beads em cada coluna
  for (j = 0; j < max; j++) {
    for (sum = i = 0; i < len; i++) {
      sum += beads[i * max + j];
      beads[i * max + j] = 0;
    }

    //logging
    //console.log('1: ', beads);

    for (i = len - sum; i < len; i++) beads[i * max + j] = 1;
  }

  for (i = 0; i < len; i++) {
    for (j = 0; j < max && beads[i * max + j]; j++) {
      vetor[i] = j;
    }
  }
  //logging
  //console.log('depois de descer: ', beads);
}

console.log('len: ', len);
bead_sort(len);
// console.log('arr ordenado? ', vetor);
