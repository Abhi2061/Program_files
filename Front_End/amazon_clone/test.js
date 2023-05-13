const header =
document.querySelector('header'); const navLinks =
document.querySelectorAll('nav ul li a'); const introSection =
document.querySelector('.intro'); const photoGallerySection =
document.querySelector('.photo-gallery'); const blogSection = 

document.querySelector('.blog'); const blogPosts =
document.querySelectorAll('.blog article');

window.addEventListener('scroll', () => { if
(window.scrollY > 0) {
header.classList.add('scrolled');
 } else {
 header.classList.remove('scrolled');
 }
});

const galleryPhotos = photoGallerySection.querySelectorAll('img');
galleryPhotos.forEach(photo => { photo.addEventListener('click',
() => { alert('Photo clicked!');
 });
});
blogPosts.forEach(post => {
 const postText = post.querySelector('p').textContent; const wordsPerMinute = 100; //
Average reading speed is around 200 words per minute const readingTime =
Math.ceil(postText.split(' ').length / wordsPerMinute); const readingTimeElement =
document.createElement('p'); readingTimeElement.textContent = `${readingTime} min read`;
post.appendChild(readingTimeElement);
});
let button = document.getElementById('button') function
buttonclick(){ 

 console.log("button was clicked")
} 