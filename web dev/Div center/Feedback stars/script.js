// JavaScript to handle the star click event
let stars = document.querySelectorAll('.star');
let ratingDisplay = document.getElementById('rating');

stars.forEach(star => {
    star.addEventListener('click', () => {
        let rating = star.getAttribute('data-value');
        
        // Update the rating value and display it
        ratingDisplay.textContent = rating;
        
        // Update the star states (active vs. inactive)
        stars.forEach(starElement => {
            if (starElement.getAttribute('data-value') <= rating) {
                starElement.classList.add('active'); // Activate the star
            } else {
                starElement.classList.remove('active'); // Deactivate the star
            }
        });
    });
});
