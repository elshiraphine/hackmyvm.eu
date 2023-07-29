import angr
import claripy

proj = angr.Project("./download")

password_length = 6
password = claripy.BVS("$uperZecretP4zz", password_length * 8)
state = proj.factory.entry_state(args=["./program"], stdin=angr.SimFileStream(name='stdin', content=password, has_end=False))

simgr = proj.factory.simulation_manager(state)

simgr.explore(find=lambda s: b"Correct" in s.posix.dumps(1))

if simgr.found:
    solution_state = simgr.found[0]
    solution = solution_state.solver.eval(password, cast_to=bytes)
    print("Password:", solution)
