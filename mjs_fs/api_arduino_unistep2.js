let Unistep2 = {
    _create: ffi('void *mgos_Unistep2_create(int, int, int, int, int, int)'),
    _run: ffi('bool mgos_Unistep2_run(void *)'),
    _move: ffi('void mgos_Unistep2_move(void *, int)'),
    _moveTo: ffi('void mgos_Unistep2_moveTo(void *, int)'),
    _currentPosition: ffi('int mgos_Unistep2_currentPosition(void *)'),
    _stepsToGo: ffi('int mgos_Unistep2_stepsToGo(void *)'),
    _stop: ffi('void mgos_Unistep2_stop(void *)'),

    create: function(_p1, _p2, _p3, _p4, _steps, _stepdelay) {
        let obj = Object.create(Unistep2._proto);
        
        obj.unistep = Unistep2._create(_p1, _p2, _p3, _p4, _steps, _stepdelay);
        
        return obj;
    },

    _proto: {
        run: function() {
          return Unistep2._run(this.unistep);
        },

        move: function(steps) {
            return Unistep2._move(this.unistep, steps);
        },

        moveTo: function(pos) {
            return Unistep2._moveTo(this.unistep, pos);
        },
        
        currentPosition: function() {
            return Unistep2._currentPosition(this.unistep);
        },

        stepsToGo: function() {
            return Unistep2._stepsToGo(this.unistep);
        },

        stop: function() {
            return Unistep2._stop(this.unistep);
        },
    },    
};