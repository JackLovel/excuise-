var Paddle = function(game) {
    var o = game.imageByName('paddle')
    o.x = 100
    o.y = 250
    o.speed = 15
    var paddle = o
    o.move = function(x) {
        if (x < 0) {
            x = 0
        }
        if (x > 400 - o.w) {
            x = 400 - o.w
        }
        o.x = x
    }
    o.moveLeft = function() {
        o.move(paddle.x - paddle.speed)
    }
    o.moveRight = function() {
        o.move(paddle.x + paddle.speed)
    }
    var aIntb = function(x, x1, x2) {
        return x > x1 && x < x2
    }
    o.collide = function(ball) {
        // if (ball.y + ball.h > o.y) {
        //     if (ball.x > o.x && ball.x < o.x + o.w) {
        //         log('相撞')
        //         return true
        //     }
        // }
        // return false
        var a = o
        var b = ball 
        if (aIntb(a.x, b.x, b.x + b.w) || aIntb(b.x, a.x, a.x + a.w)) {
            if (aIntb(a.y, b.y, b.y + b.h) || aIntb(b.y, a.y, a.y + a.h)) {
                return true
            }
        }
        return false
    }
    return o
}