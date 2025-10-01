const marvel_heros = ["spiderman","thor","monkeyman"]
const dc_heros = ["batman","superman","flash"]

//console.log( typeof marvel_heros);
//console.log( typeof dc_heros);
//console.log( dc_heros);

//marvel_heros.push(dc_heros);
//console.log(marvel_heros);
//console.log(marvel_heros[3][0]);

//const allHeros = marvel_heros.concat(dc_heros)
//console.log(allHeros);

//spread
const all_new_heros = [...marvel_heros , ...dc_heros];
//console.log(all_new_heros);


const Array1 = [1,2,3,4,5];
const Array2 = [0,0,0];
const Array3 = [6,8,9,5,3];
const Array4 = [1,2,2,2];

const concatAll = [...Array1,...Array2,...Array3,...Array4];
console.log(concatAll);

const concat_All_new = Array1.concat(Array2,Array3,Array4);
console.log(concat_All_new);


//flat
const another_array = [2,4,5,[3,9,4],6,[2,1,[6,7]]];
const real_another_array = another_array.flat(Infinity);
console.log(real_another_array);


//isArray,from
console.log(Array.isArray("Anushka"));
console.log(Array.from("Anushka"));
console.log(Array.from({name:"Anushka"}));  //interesting


//of
let score1 = 89;
let score2 = 90;
let score3 = 99;

console.log(Array.of(score1,score2,score3));
