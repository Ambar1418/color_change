let boxes = document.querySelectorAll(".box");
let result = document.querySelector("#reset-btn");
let newgmbtn = document.querySelector("#new-btn");
let msgontainer = document.querySelector(".msg-container");
let msg = document.querySelector("#msg");

var turn0 = true;
var count=0;

const winpatterns = [
  [0, 1, 2],
  [3, 4, 5],
  [6, 7, 8],
  [0, 3, 6],
  [1, 4, 7],
  [2, 5, 8],
  [0, 4, 8],
  [2, 4, 6],
];

const resetGame = () => {
  turn0 = true;
  enableboxes();
  msgontainer.classList.add("hide");
};

boxes.forEach((box) => {
  box.addEventListener("click", () => {
    console.log("box clicked");
    if (turn0) {
      box.innerHTML = "O";
      box.style.color = "red";
      turn0 = false;
    } else {
      box.innerHTML = "X";
      turn0 = true;
    }
    box.disabled = true;
    count++;
    checkwinner();
    checkdraw();
  });
});

const disableboxes = () => {
  boxes.forEach((box) => {
    box.disabled = true;
  });
};

const enableboxes = () => {
  for (let box of boxes) {
    box.innerHTML = "";
    box.disabled = false;
  }
};

const Showwinner = (winner) => {
  msg.innerText = `Congratulations, Winner is ${winner}`;
  msgontainer.classList.remove("hide");
  disableboxes();
};

function checkwinner() {
  for (let pattern of winpatterns) {
    let posval1 = boxes[pattern[0]].innerHTML;
    let posval2 = boxes[pattern[1]].innerHTML;
    let posval3 = boxes[pattern[2]].innerHTML;

    if (
      posval1 != "" &&
      posval2 != "" &&
      posval3 != "" &&
      posval1 === posval2 &&
      posval2 === posval3
    ) {
      Showwinner(posval1);
    }
  }
}

const checkdraw = () => {
    if(count === 9) {
        msg.innerText = "It's a Draw!";
        msgontainer.classList.remove("hide");
        disableboxes();
    }
}

newgmbtn.addEventListener("click", resetGame);
result.addEventListener("click", resetGame);