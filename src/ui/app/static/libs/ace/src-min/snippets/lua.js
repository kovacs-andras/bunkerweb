ace.define("ace/snippets/lua.snippets",["require","exports","module"],function(e,t,n){n.exports="snippet #!\n	#!/usr/bin/env lua\n	$1\nsnippet local\n	local ${1:x} = ${2:1}\nsnippet fun\n	function ${1:fname}(${2:...})\n		${3:-- body}\n	end\nsnippet for\n	for ${1:i}=${2:1},${3:10} do\n		${4:print(i)}\n	end\nsnippet forp\n	for ${1:i},${2:v} in pairs(${3:table_name}) do\n	   ${4:-- body}\n	end\nsnippet fori\n	for ${1:i},${2:v} in ipairs(${3:table_name}) do\n	   ${4:-- body}\n	end\n"}),ace.define("ace/snippets/lua",["require","exports","module","ace/snippets/lua.snippets"],function(e,t,n){"use strict";t.snippetText=e("./lua.snippets"),t.scope="lua"});                (function() {
                    ace.require(["ace/snippets/lua"], function(m) {
                        if (typeof module == "object" && typeof exports == "object" && module) {
                            module.exports = m;
                        }
                    });
                })();
