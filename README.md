# Simple-Php-Framework
This was an experiment with PHP OOP.<br/>
I heard someone say 'probably use OOP with PHP and make a nice website'.<br/>
I wasnt doing that yet.<br/>

So I made a class, whose purpose is to configure and generate the website it is dedicated to.<br/>
The first few worked well, but were very specific and much was hardcoded.<br/>
So... making new ones required a full restart and only the process survived.<br/>
Each time, the technique changed, improved, got a little more modularized.<br/>

It dawned on me I needed a generic base, still able to scale up to needs of most of my sites.<br/>
I read about MVC and realize I am probably reinventing the wheel. I am prone to doing that. I'm ok with it.<br/>
I am probably doing things in an unusual fashion, I will make mistakes and I will learn more.<br/>

I enjoy using this [experiment] to rapidly generate nifty websites. <br/>
This repo is my attempt to expose it to scrutiny AND primarily attempt to improve it. <br/>
I think it qualifies as 'model view controller', which I am only just learning of as a concept.<br/>

I learned PHP from reading a 'No Starch Press' book on it and creating websites with it.<br/>
I knew OOP from my C++ days. So using it in PHP was just a matter of syntax (and the fun scope of network request/response).<br/>
I include Javascript for front end tasks, The PHP is the master controller, forms apis around the backend.<br/>

The model is 'login page hybrid register landing page' primarily for login based sites.<br/>
Authentication could be removed/relocated to create pure info-pages or sell pages/landing pages.<br/>

I think of it as treating PHP like a C application.<br/>
I echo html, but I do it from my member methods. <br/>
To some MVC pro, this probably looks silly, maybe it is, it works for me so far.<br/>
I learned most of my programming before we used most of those terms. The concepts however, are not foreign to me.<br/>
