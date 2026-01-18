'use strict'

{
    const btn= document.getElementById('btn');

    btn.addEventListener('click', () => {
        // const results = ['大吉','中吉','凶','末吉']
        // btn.textContent = results[Math.floor(Math.random()* results.length)];
        const n = Math.random();
        if(n < 0.22){ 
            btn.textContent = '大吉' //22%
        }
        else if(n < 0.37){
            btn.textContent = '中吉' //15%
        }
        else if(n < 0.52){
            btn.textContent = '小吉' //15%
        }
        else if(n < 0.77){
            btn.textContent = '吉' //25%
        }
        else if(n < 0.91){
            btn.textContent = '末吉' //14%
        }
        else {
            btn.textContent = '凶' //9%
        }

    });
}