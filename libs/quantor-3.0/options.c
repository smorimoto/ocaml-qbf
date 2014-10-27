/* generated by 'genopts' from 'options.sh' */
/* DO NOT EDIT!  EDIT 'options.sh' INSTEAD */
iopt (quantor,	"QUANTOR_BACKWARD_PROCESSING",
		"--backward-processing=",
		1,
		&quantor->opts.backward_processing);
iopt (quantor,	"QUANTOR_BACKWARD_SUBSUME",
		"--backward-subsume=",
		1,
		&quantor->opts.backward_subsume);
iopt (quantor,	"QUANTOR_BINSTRENGTHEN",
		"--binstrengthen=",
		1,
		&quantor->opts.binstrengthen);
iopt (quantor,	"QUANTOR_CHECK",
		"--check=",
		0,
		&quantor->opts.check);
iopt (quantor,	"QUANTOR_EQUIVALENCES",
		"--equivalences=",
		0,
		&quantor->opts.equivalences);
iopt (quantor,	"QUANTOR_EXISTS",
		"--exists=",
		1,
		&quantor->opts.exists);
iopt (quantor,	"QUANTOR_FORALL",
		"--forall=",
		1,
		&quantor->opts.forall);
dopt (quantor,	"QUANTOR_FORALL_BIAS",
		"--forall-bias=",
		1.1,
		&quantor->opts.forall_bias);
iopt (quantor,	"QUANTOR_FORWARD_PROCESSING",
		"--forward-processing=",
		1,
		&quantor->opts.forward_processing);
iopt (quantor,	"QUANTOR_FORWARD_STRENGTHEN",
		"--forward-strengthen=",
		1,
		&quantor->opts.forward_strengthen);
iopt (quantor,	"QUANTOR_FORWARD_SUBSUME",
		"--forward-subsume=",
		1,
		&quantor->opts.forward_subsume);
iopt (quantor,	"QUANTOR_FORWARD_SUBSUME_INSTEAD_RECALC",
		"--forward-subsume-instead-recalc=",
		0,
		&quantor->opts.forward_subsume_instead_recalc);
iopt (quantor,	"QUANTOR_FUNCTIONS",
		"--functions=",
		0,
		&quantor->opts.functions);
iopt (quantor,	"QUANTOR_FUNCTION_RESOLUTION",
		"--function-resolution=",
		0,
		&quantor->opts.function_resolution);
iopt (quantor,	"QUANTOR_HARD_EXISTS_LIMIT",
		"--hard-exists-limit=",
		1000,
		&quantor->opts.hard_exists_limit);
iopt (quantor,	"QUANTOR_HYPER1RES",
		"--hyper1res=",
		1,
		&quantor->opts.hyper1res);
dopt (quantor,	"QUANTOR_LITERALS_PER_CLAUSE_FACTOR",
		"--literals-per-clause-factor=",
		1.01,
		&quantor->opts.literals_per_clause_factor);
dopt (quantor,	"QUANTOR_LITERALS_PER_CLAUSE_LIMIT",
		"--literals-per-clause-limit=",
		4.0,
		&quantor->opts.literals_per_clause_limit);
iopt (quantor,	"QUANTOR_LOG_CLAUSES_OF_SCOPES",
		"--log-clauses-of-scopes=",
		0,
		&quantor->opts.log_clauses_of_scopes);
iopt (quantor,	"QUANTOR_RECALC_SIGS",
		"--recalc-sigs=",
		2,
		&quantor->opts.recalc_sigs);
iopt (quantor,	"QUANTOR_RECYCLE_INDICES",
		"--recycle-indices=",
		1,
		&quantor->opts.recycle_indices);
iopt (quantor,	"QUANTOR_REDUCE_SCOPE",
		"--reduce-scope=",
		1,
		&quantor->opts.reduce_scope);
iopt (quantor,	"QUANTOR_RESOLVE_EXPORTED",
		"--resolve-exported=",
		1,
		&quantor->opts.resolve_exported);
iopt (quantor,	"QUANTOR_SIGREF",
		"--sigref=",
		0,
		&quantor->opts.sigref);
iopt (quantor,	"QUANTOR_SOFT_EXISTS_LENGTH",
		"--soft-exists-length=",
		10,
		&quantor->opts.soft_exists_length);
iopt (quantor,	"QUANTOR_SOFT_EXISTS_LIMIT",
		"--soft-exists-limit=",
		50,
		&quantor->opts.soft_exists_limit);
dopt (quantor,	"QUANTOR_SPACE_LIMIT",
		"--space-limit=",
		-1.0,
		&quantor->opts.space_limit);
dopt (quantor,	"QUANTOR_TIME_LIMIT",
		"--time-limit=",
		-1.0,
		&quantor->opts.time_limit);
iopt (quantor,	"QUANTOR_TRIVIAL_FALSITY",
		"--trivial-falsity=",
		0,
		&quantor->opts.trivial_falsity);
iopt (quantor,	"QUANTOR_TRIVIAL_TRUTH",
		"--trivial-truth=",
		0,
		&quantor->opts.trivial_truth);
iopt (quantor,	"QUANTOR_VERBOSE",
		"--verbose=",
		0,
		&quantor->opts.verbose);