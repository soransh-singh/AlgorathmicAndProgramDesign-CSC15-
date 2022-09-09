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




