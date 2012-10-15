#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <term.h>
#include <unistd.h>
#include "base.h"


int	init(t_env* env)
{
	if (init_env(env))
		return (1);
	init_cadre(env);
	return 0;
}

int	run(t_env* env)
{
	while (1)
	{
		resize_env(env);
	}
	return 0;
}

int	main(void)
{
	t_env	env;

	init(&env);
	run(&env);
	return 0;
}
