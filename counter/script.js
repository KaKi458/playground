let counterValue = 0;

const maxValueAchievedMessage = "Max value of the counter is 10";
const minValueAchievedMessage = "Min value of the counter is 0";

function updateCounter() {
    document.getElementById("counter").innerText = counterValue;
}

function decrementCounter() {
    clearErrorMessage();
    if (counterValue > 0) {
        counterValue--;
        updateCounter();
    } else {
        document.getElementById("errorLabel").innerText = minValueAchievedMessage;
    }
}

function incrementCounter() {
    clearErrorMessage();
    if (counterValue < 10) {
        counterValue++;
        updateCounter(); 
    } else {
        document.getElementById("errorLabel").innerText = maxValueAchievedMessage;
    }
}

function clearErrorMessage() {
    document.getElementById("errorLabel").innerText = "";
}