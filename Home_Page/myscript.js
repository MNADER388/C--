function check(textareaId) {
    let textarea = document.getElementById(textareaId);

    if (!textarea) {
      console.error(`Textarea with ID "${textareaId}" not found`);
      return false;
    }

    let value = textarea.value.trim();

    if (value === "") {
      textarea.style.borderColor = "red";
      alert("Please fill in the textarea");
      return false;
    }
    textarea.style.borderColor = "";
    return true;
  }
  
  document.getElementById("HHHH").addEventListener("submit", function (event) {
    event.preventDefault();
    if (check("floatingTextarea2")) {
      this.submit();
    }
  });
