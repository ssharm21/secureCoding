
#!/usr/bin/env python2.7
import tornado.ioloop
import tornado.web
import random
class SessionHandler(tornado.web.RequestHandler):
    def get(self):
        self.write("From Server")
// Add session code here and construct a response.
// You may use any other server framework as well 

def make_app():
    return tornado.web.Application([
        (r"/", SessionHandler),
//  you can add the path to match here
    ])

if __name__ == "__main__":
    app = make_app()
    print "Tornado Version = " + tornado.version
    random.seed() // keeps the server alive 
    app.listen(8888) // port can be changed as per requirement
    tornado.ioloop.IOLoop.current().start()
