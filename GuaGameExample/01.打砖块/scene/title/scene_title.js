var SceneTitle = function(game) {
	var s = {
		g: game,
	}
	game.registerAction('k', function(){
		var s = Scene(game)
		game.replaceScene(s)
	})

	//　初始化
	s.draw = function() {
		// draw labels
		game.context.fillText('按 k 开始游戏', 100, 100)
	}
	s.update = function() {

	}

	return s
}
