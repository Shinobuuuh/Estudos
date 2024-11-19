const paises = ['Brasil', 'Argentina', 'Alemanha'] // Lista de dados

console.log(paises[0], 'and ' + paises[2]) // Acessando a posição do array, escrevendo "and" e acessando outra posição do array
console.log(paises.length) // tamanho do array

paises.push('USA') // Adiciona no final do array um novo país

paises.pop() // removendo o último elemento do array

paises.unshift('França') // Adiciona um elemento no inicio

paises.shift() // Remove o primeiro elemento do array

console.log(paises)