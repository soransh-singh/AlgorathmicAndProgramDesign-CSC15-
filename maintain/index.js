const fs = require('fs');

if(process.argv[2] === "add"){
  const fileName = process.argv[3]
  const content = `#include<iostream>\nusing namespace std;\n\nint main(){\n\n  return 0;\n}`;
  console.log(`./../${fileName}`);
  fs.writeFile(`./../${fileName}`, content, err => {
    if (err) {
      return console.error(err);
    }
    console.log(`${fileName} added`);
    // file written successfully
  });


}else if(process.argv[2] === "delete"){
  fs.readdir("./..", (err, files) => {
    files.forEach(file => {
      if(file.match(/.exe/) || file.match(/.cpp~/) || file.match(/.cpp.un~/)){
          console.log(file);
          fs.unlinkSync(`./../${file}`);
      }
    });
  });

}

else if(process.argv[2] === "merge"){
  const start = process.argv[3]
  const end = process.argv[4]
  const mergeFile = "./solution.docx"
  let text, quesPath;

  fs.appendFileSync(mergeFile, "utf8");
  fs.writeFileSync(mergeFile, "Soransh Singh")
  for(let i=start; i<=end; i++){
    quesPath = `ques${i<10?"0":""}${i}.cpp`
    text = fs.readFileSync(`./../${quesPath}`, "utf8")
    fs.writeFileSync(mergeFile, `\n\n\n${quesPath}\n\n`, {flag: 'a+'})
    fs.writeFileSync(mergeFile, text, {flag: 'a+'})
  }
  console.log("Job done my Love");
}




