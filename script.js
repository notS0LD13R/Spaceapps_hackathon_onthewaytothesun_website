const rocket=document.getElementById('rocket');
const sat1=document.getElementById('sat1');
const sat2=document.getElementById('sat2');

const path1=document.getElementById('path1');
const path2=document.getElementById('path2');
const path3=document.getElementById('path3');


window.addEventListener("scroll",e=>{
    console.log(window.scrollY);
    vector=window.scrollY;
    rocket.style.transform=`rotate(0.5turn) 
                            translateY(${710-vector}px)`;
    sat1.style.transform=`translate(70px, ${vector-1700}px)`;
    sat2.style.transform=`translate(70px, ${vector-3290}px) rotate(0.75turn)`;

    path1.style.strokeDashoffset=`${1940-vector*1.1}px`;
    if(vector>1141){
        path2.style.strokeDashoffset=`${1940-vector*0.9+1141}px`;
        console.log("CHeck"+(1940-vector*0.9+1141));
    }
    if(vector>2816){
    path3.style.strokeDashoffset=`${1940-vector*.95+2816}px`;}

})
