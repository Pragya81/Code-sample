  // Function to open the modal popup
  function openModal() {
    document.getElementById('popupModal').style.display = 'block';
  }
  left = (screen.width – popupWinWidth) / 2
  top = (screen.height – popupWinHeight) / 4
  // Function to close the modal popup
  function closeModal() {
    document.getElementById('popupModal').style.display = 'none';
  }

  // Trigger the openModal function when the page loads
  window.onload = openModal;