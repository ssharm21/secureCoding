
The script can be copied on emulator on w3 schools to code and run parallely. 

Perform the following tasks 

Restrict the cookie saved by adding following restrictions:
1.Path   
2.Domain   
3.Max-Age 
4.Use URL Encoding to eliminate whitespaces  - encodeURIComponent()
5.Use secure attribute to change protocol to https
6.Use HTTPOnly attribute to instruct browsers to not allow javascript to access cookies via document.cookie.object module . This also prevents XSS access.


For server code : you may use the example application and work on it.
1.Write a simple server to send session id in a cookie through headers.
2.On logout, invalidate the session id.

