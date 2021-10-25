var a=0;
var ans="";

function rock()
{
    a=Math.random();
    if(a>=0&&a<=0.33)
    ans="TIE";
    else if(a>0.33&&a<=0.66)
    ans="YOU LOSE";
    else
    ans="YOU WIN";
    console.log(ans);
    generate(ans);
}

function paper()
{
    a=Math.random();
    if(a>=0&&a<=0.33)
    ans="TIE";
    else if(a>0.33&&a<=0.66)
    ans="YOU LOSE";
    else
    ans="YOU WIN";
    console.log(ans);
    generate(ans);
}

function scissor()
{
    a=Math.random();
    if(a>=0&&a<=0.33)
    ans="TIE";
    else if(a>0.33&&a<=0.66)
    ans="YOU LOSE";
    else
    ans="YOU WIN";
    console.log(ans);
    generate(ans);
}


function generate(txt)
{
let div=document.createElement('div');
div.className='res';
let text=document.createTextNode(ans);
div.appendChild(text);
document.body.appendChild(div);
div.setAttribute('style','text-align:center;border:3px solid green;width:75%;margin:0 auto;margin-bottom:2px;');
}