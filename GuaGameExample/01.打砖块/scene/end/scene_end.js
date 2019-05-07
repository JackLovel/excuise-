var SceneEnd = function(game) {
	var s = {
		g: game,
	}
	game.registerAction('r', function(){
		var s = SceneTitle(game)
		game.replaceScene(s)
	})
	//　初始化
	s.draw = function() {
		// draw labels
		game.context.fillText('游戏结束, 按 r 返回标题界面', 100, 290)
	}
	s.update = function() {

	}

	return s
}
