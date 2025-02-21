const readline=require("readline");

const read=readline.createInterface({input:process.stdin,output:process.stdout});
let ip=[];
read.on("line",(line)=>{ip.push(line);}).on("close",()=>
{
    let [n,m]=ip[0].split(" ").map(Number);
    let ar=[];
    for(let i=1;i<=m;++i)
    {
        if(ip[i])
        {
            let [a,b]=ip[i].split(" ").map(Number);
            ar.push([b,a]);
        }
    }
    ar.sort((x,y)=>y[0]-x[0]);
    let ans=0;
    for(let i=0;i<ar.length;++i)
    {
        let [b,a]=ar[i];
        if(n-a>=0)
        {
            ans+=(a*b),n-=a;
        }
        else
        {
            ans+=(b*n);
            break;
        }
    }
    console.log(ans);
});