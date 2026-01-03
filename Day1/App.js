let amount = 25455;
let number;

if (amount>=500) {
     number = (Math.floor(amount/500));
     amount = amount%500;
    console.log(number);
}
if (amount>=200) {
    number = (Math.floor(amount/200));
    amount = amount%200;
    console.log(number);
}
if (amount>=100) {
    number = (Math.floor(amount/100));
    amount = amount%100;
    console.log(number);
}
if(amount>=50){
     number = (Math.floor(amount/50));
    amount = amount%50;
    console.log(number);
}
if (amount>=1) {
    number = (Math.floor(amount/1));
    amount = amount%1;
    console.log(number);
}
