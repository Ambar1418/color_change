let userscore = 0;
let compscore = 0;

const choices = document.querySelectorAll(".choice");
const msgacess = document.querySelector("#msg");

const compscorepara = document.querySelector("#comp-score");
const userscorepara = document.querySelector("#user-score");

const getComputerChoice = () => {
  const options = ["Rock", "Paper", "Scissors"];
  const randomIndex = Math.floor(Math.random() * 3);
  return options[randomIndex];
};

const draw = () => {
  msgacess.innerHTML = "It's a draw!";
  msgacess.style.backgroundColor = "black";
};

const showWinner = (userwin, computerChoice, userChoice) => {
  if (userwin) {
    userscore++;
    userscorepara.innerHTML = userscore;
    msgacess.innerHTML = `You win! Your ${userChoice} beats computer's ${computerChoice}`;
    msgacess.style.backgroundColor = "red";
  } else {
    compscore++;
    compscorepara.innerHTML = compscore;
    msgacess.innerHTML = `You Lost! ${computerChoice} beats computer's ${userChoice}`;
    msgacess.style.backgroundColor = "blue";
  }
};

const playGame = (userChoice) => {
  const computerChoice = getComputerChoice();

  var userwin = true;
  if (userChoice === computerChoice) {
    draw();
    return;
  } else {
    if (userChoice === "Rock") {
      userwin = computerChoice === "Paper" ? false : true;
    } else if (userChoice === "Paper") {
      userwin = computerChoice === "Scissors" ? false : true;
    } else {
      userwin = computerChoice === "Rock" ? false : true;
    }
  }
  showWinner(userwin, computerChoice, userChoice);
};

choices.forEach((choice) => {
  choice.addEventListener("click", () => {
    const userChoice = choice.getAttribute("id");
    playGame(userChoice);
  });
});
