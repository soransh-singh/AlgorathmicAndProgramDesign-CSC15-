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
  const start = Number(process.argv[3])
  const end = Number(process.argv[4])
  const mergeFile = "./solution.docx"
  let text, filePath, questions;

  console.log(start);
  console.log(end);

  questions = fs.readFileSync(`./../questions.md`, "utf8")
  questions = questions.split("\r\n\r\n")


  fs.appendFileSync(mergeFile, "utf8");
  fs.writeFileSync(mergeFile, "Soransh Singh")

  for(let i=start; i<=end; i++){
    filePath = `ques${i<10?"0":""}${i}.cpp`
    console.log(filePath);
    text = fs.readFileSync(`./../${filePath}`, "utf8")
    // fs.writeFileSync(mergeFile, `\n\n\n${filePath}\n\n`, {flag: 'a+'})
    fs.writeFileSync(mergeFile, `\n\n\n${questions[i-1]}\n\ncode:\n` , {flag: 'a+'})
    fs.writeFileSync(mergeFile, `${text}\n\noutput:`, {flag: 'a+'})
  }
  console.log(`Files merged from question ${start} to ${end}`);
  console.log(`saved in file ${mergeFile}`);


}




