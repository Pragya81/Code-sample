const buttons = document.querySelectorAll('.btnfaq');

buttons.forEach(button => {
    button.addEventListener('click', () => {
        const faq = button.nextElementSibling;
        const icon = button.children[1];

        faq.classList.toggle('show');
        icon.classList.toggle('rotate');
    })
})